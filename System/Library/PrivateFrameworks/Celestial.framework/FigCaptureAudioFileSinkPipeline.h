/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWFileCoordinatorNode, BWAudioConverterNode, BWAudioFileSinkNode;

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {

	BWFileCoordinatorNode* _fileCoordinatorNode;
	BWAudioConverterNode* _audioConverterNode;
	BWAudioFileSinkNode* _audioFileSinkNode;

}

@property (nonatomic,readonly) BWFileCoordinatorNode * fileCoordinatorNode;              //@synthesize fileCoordinatorNode=_fileCoordinatorNode - In the implementation block
@property (nonatomic,readonly) BWAudioFileSinkNode * audioFileSinkNode;                  //@synthesize audioFileSinkNode=_audioFileSinkNode - In the implementation block
+(void)initialize;
-(void)dealloc;
-(BWFileCoordinatorNode *)fileCoordinatorNode;
-(BWAudioFileSinkNode *)audioFileSinkNode;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 recordingStatusDelegate:(id)arg5 ;
-(int)_buildAudioFileSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 recordingStatusDelegate:(id)arg4 ;
@end

