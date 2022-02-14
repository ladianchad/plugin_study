#ifndef WARN_STUDY_PLUGIN__
#define WARN_STUDY_PLUGIN__

#include <plugin_study/base_study_plugin.hpp>

namespace study_plugin
{
  class WarnPlugin : public BaseStudyPlugin
  {
  public:
    WarnPlugin();
    virtual void action() override;
  };
} // namespace study_plugin

#endif