// Declaration Header
#include "Range.h"

Range::Range(double lower_bound, double upper_bound)
{
  this->lower_bound = lower_bound;
  this->upper_bound = upper_bound;
}

bool Range::IsInRange(double number) const {
  return (number > lower_bound) && (number < upper_bound);
}

double Range::GetLowerBound() const {
  return this->lower_bound;
}
