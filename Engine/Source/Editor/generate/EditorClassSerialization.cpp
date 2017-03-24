
/**************************************************
* auto generated by reflection system
**************************************************/

#include <Archive.hpp>
#include <private/CloneUtility.hpp>
#include "../AssetImporter.hpp" 
#include "../ShaderImporter.hpp" 
#include "../DDSImporter.hpp" 
#include "../EditorUtility.hpp" 
#include "../ProjectSettings.hpp" 
#include "../EditorGUILayout.hpp" 
#include "../NativeFormatImporter.hpp" 
#include "../SerializedProperty.hpp" 
#include "../PropertyModification.hpp" 
#include "../IPreviewable.hpp" 
#include "../TextureImporter.hpp" 
#include "../ModelImporter.hpp" 
#include "../PrefabUtility.hpp" 
#include "../SerializedObject.hpp" 
#include "../TextureImporter.hpp" 

namespace FishEditor
{

	// FishEditor::AssetImporter
	void FishEditor::AssetImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		archive << FishEngine::make_nvp("m_assetBundleName", m_assetBundleName); // std::string
		archive << FishEngine::make_nvp("m_assetBundelVariant", m_assetBundelVariant); // std::string
		archive << FishEngine::make_nvp("m_userData", m_userData); // std::string
		archive << FishEngine::make_nvp("m_fileIDToRecycleName", m_fileIDToRecycleName); // std::map<int, std::string>
		//archive.EndClass();
	}

	void FishEditor::AssetImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		archive >> FishEngine::make_nvp("m_assetBundleName", m_assetBundleName); // std::string
		archive >> FishEngine::make_nvp("m_assetBundelVariant", m_assetBundelVariant); // std::string
		archive >> FishEngine::make_nvp("m_userData", m_userData); // std::string
		archive >> FishEngine::make_nvp("m_fileIDToRecycleName", m_fileIDToRecycleName); // std::map<int, std::string>
		//archive.EndClass();
	}



	// FishEditor::ShaderImporter
	void FishEditor::ShaderImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEditor::AssetImporter::Serialize(archive);
		//archive.EndClass();
	}

	void FishEditor::ShaderImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEditor::AssetImporter::Deserialize(archive);
		//archive.EndClass();
	}



	// FishEditor::DDSImporter
	void FishEditor::DDSImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEditor::AssetImporter::Serialize(archive);
		//archive.EndClass();
	}

	void FishEditor::DDSImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEditor::AssetImporter::Deserialize(archive);
		//archive.EndClass();
	}



	// FishEditor::EditorUtility
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::EditorUtility const & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::EditorUtility & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	// FishEditor::ProjectSettings
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::ProjectSettings const & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::ProjectSettings & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	// FishEditor::EditorGUILayout
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::EditorGUILayout const & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::EditorGUILayout & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	// FishEditor::NativeFormatImporter
	void FishEditor::NativeFormatImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEditor::AssetImporter::Serialize(archive);
		//archive.EndClass();
	}

	void FishEditor::NativeFormatImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEditor::AssetImporter::Deserialize(archive);
		//archive.EndClass();
	}


	// FishEditor::TextureSettings
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::TextureSettings const & value )
	{
		archive.BeginClass();
		archive << FishEngine::make_nvp("m_filterMode", value.m_filterMode); // FishEngine::FilterMode
		archive << FishEngine::make_nvp("m_aniso", value.m_aniso); // int
		archive << FishEngine::make_nvp("m_mipBias", value.m_mipBias); // float
		archive << FishEngine::make_nvp("m_wrapMode", value.m_wrapMode); // FishEngine::TextureWrapMode
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::TextureSettings & value )
	{
		archive.BeginClass();
		archive >> FishEngine::make_nvp("m_filterMode", value.m_filterMode); // FishEngine::FilterMode
		archive >> FishEngine::make_nvp("m_aniso", value.m_aniso); // int
		archive >> FishEngine::make_nvp("m_mipBias", value.m_mipBias); // float
		archive >> FishEngine::make_nvp("m_wrapMode", value.m_wrapMode); // FishEngine::TextureWrapMode
		archive.EndClass();
		return archive;
	}

	// FishEditor::ModelImporter
	void FishEditor::ModelImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEditor::AssetImporter::Serialize(archive);
		archive << FishEngine::make_nvp("m_globalScale", m_globalScale); // float
		archive << FishEngine::make_nvp("m_importNormals", m_importNormals); // FishEditor::ModelImporterNormals
		archive << FishEngine::make_nvp("m_importTangents", m_importTangents); // FishEditor::ModelImporterTangents
		archive << FishEngine::make_nvp("m_materialSearch", m_materialSearch); // FishEditor::ModelImporterMaterialSearch
		//archive.EndClass();
	}

	void FishEditor::ModelImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEditor::AssetImporter::Deserialize(archive);
		archive >> FishEngine::make_nvp("m_globalScale", m_globalScale); // float
		archive >> FishEngine::make_nvp("m_importNormals", m_importNormals); // FishEditor::ModelImporterNormals
		archive >> FishEngine::make_nvp("m_importTangents", m_importTangents); // FishEditor::ModelImporterTangents
		archive >> FishEngine::make_nvp("m_materialSearch", m_materialSearch); // FishEditor::ModelImporterMaterialSearch
		//archive.EndClass();
	}



	// FishEditor::PrefabUtility
	FishEngine::OutputArchive & operator << ( FishEngine::OutputArchive & archive, FishEditor::PrefabUtility const & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	FishEngine::InputArchive & operator >> ( FishEngine::InputArchive & archive, FishEditor::PrefabUtility & value )
	{
		archive.BeginClass();
		archive.EndClass();
		return archive;
	}

	// FishEditor::TextureImporter
	void FishEditor::TextureImporter::Serialize ( FishEngine::OutputArchive & archive ) const
	{
		//archive.BeginClass();
		FishEditor::AssetImporter::Serialize(archive);
		archive << FishEngine::make_nvp("m_allowAlphaSplitting", m_allowAlphaSplitting); // bool
		archive << FishEngine::make_nvp("m_alphaIsTransparency", m_alphaIsTransparency); // bool
		archive << FishEngine::make_nvp("m_alphaSource", m_alphaSource); // FishEditor::TextureImporterAlphaSource
		archive << FishEngine::make_nvp("m_anisoLevel", m_anisoLevel); // int
		archive << FishEngine::make_nvp("m_borderMipmap", m_borderMipmap); // bool
		archive << FishEngine::make_nvp("m_compressionQuality", m_compressionQuality); // int
		archive << FishEngine::make_nvp("m_convertToNormalmap", m_convertToNormalmap); // bool
		archive << FishEngine::make_nvp("m_crunchedCompression", m_crunchedCompression); // bool
		archive << FishEngine::make_nvp("m_fadeout", m_fadeout); // bool
		archive << FishEngine::make_nvp("m_heightmapScale", m_heightmapScale); // float
		archive << FishEngine::make_nvp("m_generateCubemap", m_generateCubemap); // FishEditor::TextureImporterGenerateCubemap
		archive << FishEngine::make_nvp("m_textureType", m_textureType); // FishEditor::TextureImporterType
		archive << FishEngine::make_nvp("m_textureShape", m_textureShape); // FishEditor::TextureImporterShape
		archive << FishEngine::make_nvp("m_textureSettings", m_textureSettings); // FishEditor::TextureSettings
		archive << FishEngine::make_nvp("m_sRGBTexture", m_sRGBTexture); // bool
		archive << FishEngine::make_nvp("m_isReadable", m_isReadable); // bool
		archive << FishEngine::make_nvp("m_mipmapEnabled", m_mipmapEnabled); // bool
		//archive.EndClass();
	}

	void FishEditor::TextureImporter::Deserialize ( FishEngine::InputArchive & archive )
	{
		//archive.BeginClass(2);
		FishEditor::AssetImporter::Deserialize(archive);
		archive >> FishEngine::make_nvp("m_allowAlphaSplitting", m_allowAlphaSplitting); // bool
		archive >> FishEngine::make_nvp("m_alphaIsTransparency", m_alphaIsTransparency); // bool
		archive >> FishEngine::make_nvp("m_alphaSource", m_alphaSource); // FishEditor::TextureImporterAlphaSource
		archive >> FishEngine::make_nvp("m_anisoLevel", m_anisoLevel); // int
		archive >> FishEngine::make_nvp("m_borderMipmap", m_borderMipmap); // bool
		archive >> FishEngine::make_nvp("m_compressionQuality", m_compressionQuality); // int
		archive >> FishEngine::make_nvp("m_convertToNormalmap", m_convertToNormalmap); // bool
		archive >> FishEngine::make_nvp("m_crunchedCompression", m_crunchedCompression); // bool
		archive >> FishEngine::make_nvp("m_fadeout", m_fadeout); // bool
		archive >> FishEngine::make_nvp("m_heightmapScale", m_heightmapScale); // float
		archive >> FishEngine::make_nvp("m_generateCubemap", m_generateCubemap); // FishEditor::TextureImporterGenerateCubemap
		archive >> FishEngine::make_nvp("m_textureType", m_textureType); // FishEditor::TextureImporterType
		archive >> FishEngine::make_nvp("m_textureShape", m_textureShape); // FishEditor::TextureImporterShape
		archive >> FishEngine::make_nvp("m_textureSettings", m_textureSettings); // FishEditor::TextureSettings
		archive >> FishEngine::make_nvp("m_sRGBTexture", m_sRGBTexture); // bool
		archive >> FishEngine::make_nvp("m_isReadable", m_isReadable); // bool
		archive >> FishEngine::make_nvp("m_mipmapEnabled", m_mipmapEnabled); // bool
		//archive.EndClass();
	}



} // namespace FishEditor
