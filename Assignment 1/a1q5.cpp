class Point {
public:
  int x;
  int y;

  double distance_from_origin() {
    return sqrt(pow(x, 2) + pow(y, 2));
  }
};

int main() {
  Point p1 = {3, 4};

  double distance = p1.distance_from_origin();

  std::cout << "Distance from origin: " << distance << std::endl;

  return 0;
}
