/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface PHImportDeleteJob : NSObject {

	BOOL _canCancel;
	/*^block*/id _completion;
	NSMutableArray* _cameraFiles;
	NSObject*<OS_dispatch_queue> _serializer;

}

@property (nonatomic,retain) NSMutableArray * cameraFiles;                         //@synthesize cameraFiles=_cameraFiles - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                 //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL canCancel;                                       //@synthesize canCancel=_canCancel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializer;              //@synthesize serializer=_serializer - In the implementation block
-(id)completion;
-(NSMutableArray *)cameraFiles;
-(id)initWithCameraFiles:(id)arg1 canCancel:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteNextCameraFile;
-(void)deleteAllCameraFiles;
-(unsigned long long)removeCameraFile:(id)arg1 ;
-(void)setCameraFiles:(NSMutableArray *)arg1 ;
-(BOOL)canCancel;
-(void)setCanCancel:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)serializer;
-(void)setSerializer:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

