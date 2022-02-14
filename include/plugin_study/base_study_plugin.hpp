#ifndef BASE_STUDY_PLUGIN__
#define BASE_STUDY_PLUGIN__
#include <string>
namespace study_plugin
{
  class BaseStudyPlugin
  {
  protected:
    std::string name_;

  public:
    BaseStudyPlugin(std::string name = "") : name_(name) {}

    virtual std::string getName()
    {
      return name_;
    };

    virtual void action() = 0;
  };

} // namespace study_plugin

#endif