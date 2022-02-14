#ifndef ERROR_STUDY_PLUGIN__
#define ERROR_STUDY_PLUGIN__

#include <plugin_study/base_study_plugin.hpp>

namespace study_plugin
{
  class ErrorPlugin : public BaseStudyPlugin
  {
  public:
    ErrorPlugin();
    virtual void action() override;
  };
} // namespace study_plugin

#endif