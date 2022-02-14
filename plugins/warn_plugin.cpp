#include <plugin_study/warn_plugin.hpp>
#include <ros/ros.h>
#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(study_plugin::WarnPlugin, study_plugin::BaseStudyPlugin);

namespace study_plugin
{
  WarnPlugin::WarnPlugin() : BaseStudyPlugin("warn plugin"){};

  void WarnPlugin::action()
  {
    ROS_WARN("action : logging warn plugin");
  }
} // namespace study_plugin
