std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; //This may not work as expected because std::vector<bool> is specialized