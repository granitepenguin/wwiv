/**************************************************************************/
/*                                                                        */
/*                              WWIV Version 5.x                          */
/*             Copyright (C)1998-2016, WWIV Software Services             */
/*                                                                        */
/*    Licensed  under the  Apache License, Version  2.0 (the "License");  */
/*    you may not use this  file  except in compliance with the License.  */
/*    You may obtain a copy of the License at                             */
/*                                                                        */
/*                http://www.apache.org/licenses/LICENSE-2.0              */
/*                                                                        */
/*    Unless  required  by  applicable  law  or agreed to  in  writing,   */
/*    software  distributed  under  the  License  is  distributed on an   */
/*    "AS IS"  BASIS, WITHOUT  WARRANTIES  OR  CONDITIONS OF ANY  KIND,   */
/*    either  express  or implied.  See  the  License for  the specific   */
/*    language governing permissions and limitations under the License.   */
/*                                                                        */
/**************************************************************************/

#if !defined (__INCLUDED_BBS_NULL_REMOTE_IO_H__)
#define __INCLUDED_BBS_NULL_REMOTE_IO_H__

#include <string>

#include "bbs/remote_io.h"

/** Null remote session. */
/**
 * Base Communication Class.
 */
class NullRemoteIO : public RemoteIO {
 public:
  NullRemoteIO() : RemoteIO() {}
  virtual ~NullRemoteIO() {}

  // Nothing is always able to be open.
  bool open() override { return true; }
  void close(bool temporary) override {}
  unsigned char getW() override { return 0; }
  bool dtr(bool raise) override { return true; }
  void purgeIn() override {}
  unsigned int put(unsigned char ch) override { return 0; }
  unsigned int read(char *buffer, unsigned int count) override { return 0; }
  unsigned int write(const char *buffer, unsigned int count, bool bNoTranslation = false) override { return 0; }
  bool carrier() override { return false; }
  bool incoming() override { return false; }

  unsigned int GetHandle() const override { return 0; }
};

#endif  // #if !defined (__INCLUDED_BBS_REMOTE_IO_H__)

