#pragma once

#include <vector>

struct fbo
{
private:
	static std::vector<unsigned int> id;
	static unsigned int selectID;

public:
	static void bind(unsigned int id);
	static void bindDefault();

	static unsigned int create();

	static void linkTexture(unsigned int t_id);

	static void Delete(unsigned int id);
	static void DeleteALL();
};

class FBO : private fbo
{

};