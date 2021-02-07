file_path = File.expand_path("read.txt", __FILE__)
input     = File.read(file_path)

require 'set'

class Checker
  attr_accessor :data, :bags

  def initialize(input)
    @bags  = Hash.new { |h, k| h[k] = [] }
    @data = input.split("\n")
                 .map do |rule|
                  color, contents = rule.split(' bags contain')
                  @bags[color] += contents.gsub(" bag", "")
                                          .gsub(" bags", "")
                                          .tr(".", "")
                                          .split(', ')
                                          .map do |string|
                                            number_of_bags = string.dup.scan(/\d/).join('')
                                            color = if string[-1] == 's'
                                                      string.lstrip[0..-2].tr("0-9", "")
                                                    else
                                                      string.lstrip.tr("0-9", "")
                                                    end
                                            bag_color = color.lstrip
                                            { bag_color => number_of_bags.to_i }
                                          end
                  end
  end

  # example: @bags
  # {"light red"=>[{"bright white"=>1}, {"muted yellow"=>2}],
  # "dark orange"=>[{"bright white"=>3}, {"muted yellow"=>4}],
  # "bright white"=>[{"shiny gold"=>1}],
  # "muted yellow"=>[{"shiny gold"=>2}, {"faded blue"=>9}],
  # "shiny gold"=>[{"dark olive"=>1}, {"vibrant plum"=>2}],
  # "dark olive"=>[{"faded blue"=>3}, {"dotted black"=>4}],
  # "vibrant plum"=>[{"faded blue"=>5}, {"dotted black"=>6}],
  # "faded blue"=>[{"no other"=>0}],
  # "dotted black"=>[{"no other"=>0}]}

  def solve_silver
    visited = Set.new()
    stack   = ['shiny gold']
    until stack.empty?
      current_color = stack.pop
      next if visited.member?(current_color)

      bags.each do |parent, children|
        stack << parent if children.flat_map(&:keys).include?(current_color)
        visited.add(current_color)
      end
    end

    visited.length - 1
  end

  def solve_gold
    sum      = 0
    stack    = ['shiny gold']

    until stack.empty?
      children =  bags[stack.pop]
      next if children.nil?

      children.each do |item|
        child_color = item.keys.first
        child_count = item.values.first
        child_count.times do
          stack << child_color
          sum += 1
        end
      end
    end
    sum
  end

end

checker = Checker.new(input)
pp checker.solve_silver
pp checker.solve_gold