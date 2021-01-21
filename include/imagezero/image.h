#ifndef IZ_IMAGE_H
#define IZ_IMAGE_H 1

#include <cstddef>

namespace IZ {

// template<
//     typename Sample = unsigned char,
//     ptrdiff_t samplesPerPixel = 3
// >
class Image
{
public:
    int width() const { return m_width; }
    int height() const { return m_height; }
    ptrdiff_t samplesPerLine() const { return m_spl; }
    unsigned char *data() const { return m_data; }

    void setWidth(int width) { m_width = width; }
    void setHeight(int height) { m_height = height; }
    void setSamplesPerLine(ptrdiff_t samplesPerLine) { m_spl = samplesPerLine; }
    void setData(unsigned char *data) { m_data = data; }

protected:
    int m_width;
    int m_height;
    ptrdiff_t m_spl;
    unsigned char *m_data;
};

} // namespace IZ

#endif
