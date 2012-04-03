#include <cstdlib>

#include "EnglishBuilder.h"
#include "ArabicBuilder.h" 
#include "Director.h"

int main()
{
    Builder* ptr_build_english_counting = new EnglishBuilder();
    Builder* ptr_build_arabic_counting  = new ArabicBuilder();

    Director* ptr_dir_english_counting  = new Director( ptr_build_english_counting);
    Director* ptr_dir_arabic_counting   = new Director( ptr_build_arabic_counting);

    ptr_dir_english_counting->Constructor();
    ptr_dir_arabic_counting->Constructor();

    delete ptr_dir_english_counting;
    ptr_dir_english_counting = NULL;

    delete ptr_dir_arabic_counting;
    ptr_dir_arabic_counting = NULL;

    delete ptr_build_arabic_counting;
    ptr_build_arabic_counting = NULL;

    delete ptr_build_english_counting;
    ptr_build_english_counting = NULL;

    return 0;
}
