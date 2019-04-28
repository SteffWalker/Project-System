#include "bluray.h"
#include "productmodel.h"

vector<string> BluRay::getExtraLanguageTracks() const
{
    return extraLanguageTracks;
}

void BluRay::setExtraLanguageTracks(const vector<string> &value)
{
    extraLanguageTracks = value;
}

vector<string> BluRay::getExtraSubtitleTracks() const
{
    return extraSubtitleTracks;
}

void BluRay::setExtraSubtitleTracks(const vector<string> &value)
{
    extraSubtitleTracks = value;
}

vector<string> BluRay::getBonusTracks() const
{
    return bonusTracks;
}

void BluRay::setBonusTracks(const vector<string> &value)
{
    bonusTracks = value;
}

BluRay::BluRay()
{

}