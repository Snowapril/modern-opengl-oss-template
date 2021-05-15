#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include <GL3/GLTypes.hpp>
#include <GL3/DebugUtils.hpp>
#include <string>

namespace GL3 {

	//!
	//! \brief      Texture wrapping class
	//!
	//! Provides binding method and contents update method with DSA techniques
	//!
	class Texture
	{
	public:
		//! Default constructor
		Texture();
		//! Default destructor
		~Texture();
		//! Initialize the texture with given image path.
		void Initialize(GLenum target);
		//! Upload the texel data to the GPU memory
		void UploadTexture(const void* data, int width, int height, GLenum internalFormat, GLenum format, GLenum type);
		//! Upload the texel data to the GPU memory
		void UploadTextureArray(const void* data, int width, int height, int layerCount, GLenum internalFormat, GLenum format, GLenum type);
		//! Bind generated texture.
		void BindTexture(GLuint slot) const;
		//! Unbind texture with current bound slot
		void UnbindTexture() const;
		//! Clean up the generated resources
		void CleanUp();
	private:
		DebugUtils _debug;
		GLenum _target;
		GLuint _textureID;
	};

};

#endif //! end of Texture.hpp