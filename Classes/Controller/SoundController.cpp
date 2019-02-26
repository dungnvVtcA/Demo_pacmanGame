#include "Controller/SoundController.h"

static char soundNames[ES_LAST][60] = {
	"audio/pacman_eatfruit.wav",//	
	"audio/pacman_eatghost.wav",//	ES_EAT_SPIRIT,
	"audio/sirensound.wav",//	ES_SIREN_SOUND,
	"audio/pacman_song2.wav",//	ES_PACMAN_SOUNG,
	"audio/pacman_eatpoint.wav",//	ES_PACMAN_COINING //eatpoint,

};


void SoundController::playMusic(ESounds sound, bool isLoop) {
	CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(soundNames[sound], isLoop);
}

void SoundController::playEffect(ESounds sound, bool isLoop) {
	CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(soundNames[sound], isLoop);
}

void SoundController::preloadingAndPlayMusic(ESounds sound, bool isLoop) {
	CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic(soundNames[sound]);
	CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(soundNames[sound], isLoop);
}

void SoundController::preloadingAndPlayEffect(ESounds sound, bool isLoop) {
	CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect(soundNames[sound]);
	CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(soundNames[sound], isLoop);
}

void SoundController::preloadEffect(ESounds sound) {
	CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect(soundNames[sound]);
}