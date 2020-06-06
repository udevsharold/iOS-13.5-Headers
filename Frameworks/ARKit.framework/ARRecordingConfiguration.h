/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARCustomTechniquesConfiguration.h>
#import <ARKit/ARRecordingTechniqueDelegate.h>

@class NSURL, ARRecordingTechniquePublic, NSString;

@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration <ARRecordingTechniqueDelegate> {

	NSURL* _fileURL;
	ARRecordingTechniquePublic* _recordingTechnique;
	unsigned long long _state;
	/*^block*/id _finishBlock;

}

@property (assign) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) ARRecordingTechniquePublic * recordingTechnique;              //@synthesize recordingTechnique=_recordingTechnique - In the implementation block
@property (copy) id finishBlock;                                                           //@synthesize finishBlock=_finishBlock - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)state;
-(NSURL *)fileURL;
-(void)setState:(unsigned long long)arg1 ;
-(id)initPrivate;
-(id)videoFormat;
-(void)setVideoFormat:(id)arg1 ;
-(void)startRecording;
-(long long)worldAlignment;
-(id)parentImageSensorSettings;
-(id)imageSensorSettings;
-(id)secondaryTechniques;
-(id)initWithBaseConfiguration:(id)arg1 recordingTechnique:(id)arg2 ;
-(void)technique:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)abortRecording;
-(id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 ;
-(ARRecordingTechniquePublic *)recordingTechnique;
-(void)setFinishBlock:(id)arg1 ;
-(id)finishBlock;
-(void)finishRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(void)setRecordingTechnique:(ARRecordingTechniquePublic *)arg1 ;
@end

