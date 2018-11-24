#ifndef AUDLIB_H
#define AUDLIB_H

#define SOUND_ONE "..\\AudioLib\\audio assets\\sound1.wav"
#define SOUND_TWO "..\\AudioLib\\audio assets\\sound2.wav"
#define SOUND_THREE "..\\AudioLib\\audio assets\\sound3.wav"

#ifdef AUD_LIB_DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif

extern "C"
{
	DECLDIR void playSound(char*);
	DECLDIR void stopQueue();
	DECLDIR void addSoundToQueue(char *);
	DECLDIR void playSoundLoop(char *);
}

#endif