#pragma once

#include <iostream>
#include <string>

using namespace std;

string decryptionCall();
string incryptionCall();
void init(char mat[][100]);
static void incryptoin(string& phrase, string& incrypted, int);
static void decryption(string& phrase, string& incrypted, int);
void print(string& phrase, int key);