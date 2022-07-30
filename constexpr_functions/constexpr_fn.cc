constexpr double miles_to_km(double miles) { return miles * 1.602; }

// const return value expected - evaluated at compile time
const double dist2 = miles_to_km(40);

// Non-const return value expected - evaluated at runtime
double dist1 = miles_to_km(40);

// constexpr return value but non-const argument - error
double dist3{40};
constexpr double dist4 = miles_to_km(dist3);  