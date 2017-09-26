/*
 * Copyright 2017 <copyright holder> <email>
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

#ifndef HEBRAS_H
#define HEBRAS_H
#include <QThread>

class hebras : public QThread
{
  Q_OBJECT
private:
  bool parado;
public:
  
  void run();
  bool getparado();
  void setparado(bool stop);

  hebras();
  ~hebras();

signals:
  void timeout();

  
};

#endif // HEBRAS_H
