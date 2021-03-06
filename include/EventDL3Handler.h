/*
 ==========================================================================
 RTA-DL3-Sim C++ https://github.com/cta-rta/RTA-DL3-Sim
 Copyright (C) 2018 Giancarlo Zollino
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ==========================================================================
*/
#include<iostream>
#include<vector>
#include <chrono>
#include <thread>

#include"FitsReader.h"
#include"DBConnector.h"

using std::string;
using std::cout;
using std::endl;

class EventDL3Handler {
public:
  EventDL3Handler(const char* _fitsFileName, int _idObs, int _idRepo, double _rate, const char * _host, const char * _userId, const char * _userPwd,   const char * _dbName, const char * _tbName);
  int BatchEventManager();
  int BatchEventManagerExtQuery();
  int BatchEventManagerBySprintf();
  int TransactionBatchEventManager();
  int TransactionBatchEventManagerByString();
  int TransactionBatchEventManagerExtQuery();
  int TransactionBatchEventManagerBySprintf();
  int StreamingEventManager();
  int StreamingEventManagerString();
  int StreamingEventManagerExtQuery();
  int StreamingEventManagerBySprintf();

  const char * fitsFileName;
  int idObs;
  int idRepo;
	long int rate;
  const char * host;
  const char * dbName;
  const char * tbName;
  long double mjdferi;
  long double mjdferf;
	string userId;
	string userPwd;
  std::vector<string> hdu;
  std::vector<double> table;
};
