/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

@class NSDictionary;

@interface BWAudioFormat : BWFormat {

	opaqueCMFormatDescriptionRef _audioFormatDescription;
	NSDictionary* _avAudioSettings;

}

@property (readonly) opaqueCMFormatDescriptionRef audioFormatDescription; 
@property (readonly) NSDictionary * audioCompressionSBPOptions; 
+(void)initialize;
+(id)formatWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)_initWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(NSDictionary *)audioCompressionSBPOptions;
@end

