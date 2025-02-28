/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to CXX Translator
  File name: PressSensorState_.idl
  Source: PressSensorState_.hpp
  Cyclone DDS: v0.10.2

*****************************************************************/
#ifndef DDSCXX_UNITREE_IDL_HG_PRESSSENSORSTATE__HPP
#define DDSCXX_UNITREE_IDL_HG_PRESSSENSORSTATE__HPP

#include <cstdint>
#include <array>

namespace unitree_hg
{
namespace msg
{
namespace dds_
{
class PressSensorState_
{
private:
 std::array<float, 12> pressure_ = { };
 std::array<float, 12> temperature_ = { };
 uint32_t lost_ = 0;
 uint32_t reserve_ = 0;

public:
  PressSensorState_() = default;

  explicit PressSensorState_(
    const std::array<float, 12>& pressure,
    const std::array<float, 12>& temperature,
    uint32_t lost,
    uint32_t reserve) :
    pressure_(pressure),
    temperature_(temperature),
    lost_(lost),
    reserve_(reserve) { }

  const std::array<float, 12>& pressure() const { return this->pressure_; }
  std::array<float, 12>& pressure() { return this->pressure_; }
  void pressure(const std::array<float, 12>& _val_) { this->pressure_ = _val_; }
  void pressure(std::array<float, 12>&& _val_) { this->pressure_ = _val_; }
  const std::array<float, 12>& temperature() const { return this->temperature_; }
  std::array<float, 12>& temperature() { return this->temperature_; }
  void temperature(const std::array<float, 12>& _val_) { this->temperature_ = _val_; }
  void temperature(std::array<float, 12>&& _val_) { this->temperature_ = _val_; }
  uint32_t lost() const { return this->lost_; }
  uint32_t& lost() { return this->lost_; }
  void lost(uint32_t _val_) { this->lost_ = _val_; }
  uint32_t reserve() const { return this->reserve_; }
  uint32_t& reserve() { return this->reserve_; }
  void reserve(uint32_t _val_) { this->reserve_ = _val_; }

  bool operator==(const PressSensorState_& _other) const
  {
    (void) _other;
    return pressure_ == _other.pressure_ &&
      temperature_ == _other.temperature_ &&
      lost_ == _other.lost_ &&
      reserve_ == _other.reserve_;
  }

  bool operator!=(const PressSensorState_& _other) const
  {
    return !(*this == _other);
  }

};

}

}

}

#include "dds/topic/TopicTraits.hpp"
#include "org/eclipse/cyclonedds/topic/datatopic.hpp"

namespace org {
namespace eclipse {
namespace cyclonedds {
namespace topic {

template <> constexpr const char* TopicTraits<::unitree_hg::msg::dds_::PressSensorState_>::getTypeName()
{
  return "unitree_hg::msg::dds_::PressSensorState_";
}

template <> constexpr bool TopicTraits<::unitree_hg::msg::dds_::PressSensorState_>::isKeyless()
{
  return true;
}

#ifdef DDSCXX_HAS_TYPE_DISCOVERY
template<> constexpr unsigned int TopicTraits<::unitree_hg::msg::dds_::PressSensorState_>::type_map_blob_sz() { return 406; }
template<> constexpr unsigned int TopicTraits<::unitree_hg::msg::dds_::PressSensorState_>::type_info_blob_sz() { return 100; }
template<> inline const uint8_t * TopicTraits<::unitree_hg::msg::dds_::PressSensorState_>::type_map_blob() {
  static const uint8_t blob[] = {
 0x83,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf1,  0x03,  0x93,  0x1d,  0x83,  0x67,  0x60,  0x08, 
 0x26,  0x6e,  0x46,  0x6a,  0x66,  0xb2,  0x55,  0x00,  0x6b,  0x00,  0x00,  0x00,  0xf1,  0x51,  0x01,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x5b,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x16,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x0c,  0x09,  0xd9,  0x9f,  0xad,  0x96,  0x00,  0x00,  0x16,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00, 
 0x0c,  0x09,  0xee,  0xf4,  0x38,  0xf7,  0x00,  0x00,  0x0b,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x07,  0x1c,  0x9a,  0x44,  0xeb,  0x00,  0x0b,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x07,  0x9c,  0x3b,  0x62,  0x94,  0x00,  0xe2,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00, 
 0xf2,  0xcd,  0x53,  0x1f,  0x52,  0x24,  0x7f,  0x1d,  0x07,  0xb3,  0x82,  0x0f,  0xf4,  0x2b,  0x21,  0x00, 
 0xca,  0x00,  0x00,  0x00,  0xf2,  0x51,  0x01,  0x00,  0x31,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x29,  0x00,  0x00,  0x00,  0x75,  0x6e,  0x69,  0x74,  0x72,  0x65,  0x65,  0x5f,  0x68,  0x67,  0x3a,  0x3a, 
 0x6d,  0x73,  0x67,  0x3a,  0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a,  0x50,  0x72,  0x65,  0x73,  0x73, 
 0x53,  0x65,  0x6e,  0x73,  0x6f,  0x72,  0x53,  0x74,  0x61,  0x74,  0x65,  0x5f,  0x00,  0x00,  0x00,  0x00, 
 0x8a,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00,  0x23,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x0c,  0x09,  0x00,  0x00, 
 0x09,  0x00,  0x00,  0x00,  0x70,  0x72,  0x65,  0x73,  0x73,  0x75,  0x72,  0x65,  0x00,  0x00,  0x00,  0x00, 
 0x26,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x0c,  0x09,  0x00,  0x00,  0x0c,  0x00,  0x00,  0x00,  0x74,  0x65,  0x6d,  0x70, 
 0x65,  0x72,  0x61,  0x74,  0x75,  0x72,  0x65,  0x00,  0x00,  0x00,  0x00,  0x00,  0x13,  0x00,  0x00,  0x00, 
 0x02,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x00,  0x05,  0x00,  0x00,  0x00,  0x6c,  0x6f,  0x73,  0x74, 
 0x00,  0x00,  0x00,  0x00,  0x16,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x00, 
 0x08,  0x00,  0x00,  0x00,  0x72,  0x65,  0x73,  0x65,  0x72,  0x76,  0x65,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x22,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf2,  0xcd,  0x53,  0x1f,  0x52,  0x24,  0x7f,  0x1d, 
 0x07,  0xb3,  0x82,  0x0f,  0xf4,  0x2b,  0x21,  0xf1,  0x03,  0x93,  0x1d,  0x83,  0x67,  0x60,  0x08,  0x26, 
 0x6e,  0x46,  0x6a,  0x66,  0xb2,  0x55, };
  return blob;
}
template<> inline const uint8_t * TopicTraits<::unitree_hg::msg::dds_::PressSensorState_>::type_info_blob() {
  static const uint8_t blob[] = {
 0x60,  0x00,  0x00,  0x00,  0x01,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf1,  0x03,  0x93,  0x1d,  0x83,  0x67,  0x60,  0x08,  0x26,  0x6e,  0x46,  0x6a, 
 0x66,  0xb2,  0x55,  0x00,  0x6f,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x02,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf2,  0xcd,  0x53,  0x1f,  0x52,  0x24,  0x7f,  0x1d,  0x07,  0xb3,  0x82,  0x0f, 
 0xf4,  0x2b,  0x21,  0x00,  0xce,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00, };
  return blob;
}
#endif //DDSCXX_HAS_TYPE_DISCOVERY

} //namespace topic
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

namespace dds {
namespace topic {

template <>
struct topic_type_name<::unitree_hg::msg::dds_::PressSensorState_>
{
    static std::string value()
    {
      return org::eclipse::cyclonedds::topic::TopicTraits<::unitree_hg::msg::dds_::PressSensorState_>::getTypeName();
    }
};

}
}

REGISTER_TOPIC_TYPE(::unitree_hg::msg::dds_::PressSensorState_)

namespace org{
namespace eclipse{
namespace cyclonedds{
namespace core{
namespace cdr{

template<>
propvec &get_type_props<::unitree_hg::msg::dds_::PressSensorState_>();

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool write(T& streamer, const ::unitree_hg::msg::dds_::PressSensorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!write(streamer, instance.pressure()[0], instance.pressure().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!write(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.lost()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.reserve()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool write(S& str, const ::unitree_hg::msg::dds_::PressSensorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::PressSensorState_>();
  str.set_mode(cdr_stream::stream_mode::write, as_key);
  return write(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool read(T& streamer, ::unitree_hg::msg::dds_::PressSensorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!read(streamer, instance.pressure()[0], instance.pressure().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!read(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.lost()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.reserve()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool read(S& str, ::unitree_hg::msg::dds_::PressSensorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::PressSensorState_>();
  str.set_mode(cdr_stream::stream_mode::read, as_key);
  return read(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool move(T& streamer, const ::unitree_hg::msg::dds_::PressSensorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!move(streamer, instance.pressure()[0], instance.pressure().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!move(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.lost()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.reserve()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool move(S& str, const ::unitree_hg::msg::dds_::PressSensorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::PressSensorState_>();
  str.set_mode(cdr_stream::stream_mode::move, as_key);
  return move(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool max(T& streamer, const ::unitree_hg::msg::dds_::PressSensorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!max(streamer, instance.pressure()[0], instance.pressure().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!max(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.lost()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.reserve()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool max(S& str, const ::unitree_hg::msg::dds_::PressSensorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::PressSensorState_>();
  str.set_mode(cdr_stream::stream_mode::max, as_key);
  return max(str, instance, props.data()); 
}

} //namespace cdr
} //namespace core
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

#endif // DDSCXX_UNITREE_IDL_HG_PRESSSENSORSTATE__HPP
