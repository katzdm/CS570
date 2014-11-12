#ifndef _RANGE_H_
#define _RANGE_H_

class Range {
private:
  double lower_bound;
  double upper_bound;

public:
  Range(double lower_bound, double upper_bound);

  bool IsInRange(double number) const;
  double GetLowerBound() const;
};

#endif
