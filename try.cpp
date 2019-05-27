#include "stdafx.h"

std::vector<std::string> generateSubstrings( std::string s )
{
    if ( s.empty() ) return {};

    std::vector<std::string> v;
    v.reserve( s.size() * ( s.size() + 1 ) / 2 );

    for ( std::string::size_type i = 0; i < s.size(); i++ )
    {
        v.push_back( s.substr( 0, i + 1 ) );
    }

    for ( const std::string &t : generateSubstrings( s.substr( 1 ) ) )
    {
        v.push_back( t );
    }

    return v;
}