
class TestRect < Test::Unit::TestCase
  include SFML
  
  def test_initialization1
    rect = Rect.new
    assert_equal(0, rect.left)
    assert_equal(0, rect.top)
    assert_equal(0, rect.width)
    assert_equal(0, rect.height)
  end
  
  def test_initialization2
    rect = Rect.new(10, 15, 50, 40)
    assert_equal(10, rect.left)
    assert_equal(15, rect.top)
    assert_equal(50, rect.width)
    assert_equal(40, rect.height)
  end
  
  def test_initialization3
    rect = Rect.new(10, 15, 50, 40.5)
    assert_equal(10.0, rect.left)
    assert_equal(15.0, rect.top)
    assert_equal(50.0, rect.width)
    assert_equal(40.5, rect.height)
  end
  
  def test_inspect
    rect1 = Rect.new(10, 15, 50, 40)
    rect2 = Rect.new(10, 15, 50, 40.5)
    assert_equal("Rect(10, 15, 50, 40)", rect1.inspect)
    assert_equal("Rect(10.0, 15.0, 50.0, 40.5)", rect2.inspect)
    assert_equal("rect1 = #{rect1}", "rect1 = " + rect1.inspect)
    assert_equal("rect2 = #{rect2}", "rect2 = " + rect2.inspect)
  end
  
  def test_errors
    assert_raise(TypeError)     { Rect.new("aaa")         }
    assert_raise(TypeError)     { Rect.new("aaa", "bbb")  }
    assert_raise(ArgumentError) { Rect.new(1, 2, 3)       }
    assert_raise(TypeError)     { Rect.new(0, 0, 10, "5") }
  end
  
end