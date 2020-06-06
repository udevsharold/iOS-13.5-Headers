/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>

@class AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	AVAssetWriterInputPassDescription* _nextPassDescription;

}

@property (nonatomic,readonly) AVAssetWriterInputPassDescription * descriptionForNextPass;              //@synthesize nextPassDescription=_nextPassDescription - In the implementation block
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 trackID:(int)arg2 ;
-(AVAssetWriterInputPassDescription *)descriptionForNextPass;
-(void)_notifyWhetherMorePassesAreNeeded:(BOOL)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3 ;
@end

