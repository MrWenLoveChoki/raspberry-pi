#ifndef	__UTIL_H
#define __UTIL_H

#include <string>
#include <vector>

/**
 * This class implements some useful functionalities.
 *
 * @author Darran Zhang @ codelast.com
 */

class CUtil
{
 public:
  CUtil();
  virtual ~CUtil();

 private:
  std::string static getCurrentTime();

 public:
  void static stringSplit(const std::string &src,
			  char delimiter,
			  std::vector<std::string> &output);
  int static getPositionInTimeRange(const std::string &hourAndMinute);
  int static getCurrentTimePositionInTimeRange();
};

#endif
