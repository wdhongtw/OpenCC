module;

#include <SimpleConverter.hpp>

#include <BinaryDict.hpp>
#include <Config.hpp>
#include <Conversion.hpp>
#include <Converter.hpp>
#include <DartsDict.hpp>
#include <Dict.hpp>
#include <DictConverter.hpp>
#include <DictGroup.hpp>
#include <Lexicon.hpp>
#include <MaxMatchSegmentation.hpp>
#include <Optional.hpp>
#include <Segmentation.hpp>
#include <Segments.hpp>
#include <SerializableDict.hpp>
#include <TextDict.hpp>
#include <UTF8Util.hpp>

export module OpenCC;

export namespace opencc {

// Simple API

using opencc::SimpleConverter;

// Comprehensive API

using opencc::BinaryDict;
using opencc::Config;
using opencc::Conversion;
using opencc::ConversionChain;
using opencc::Converter;
using opencc::DartsDict;
using opencc::Dict;
using opencc::DictEntry;
using opencc::DictGroup;
using opencc::Lexicon;
using opencc::MaxMatchSegmentation;
using opencc::Optional;
using opencc::Segmentation;
using opencc::Segments;
using opencc::SerializableDict;
using opencc::TextDict;
using opencc::UTF8Util;

using opencc::ConvertDictionary;

} // namespace opencc
