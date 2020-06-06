/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {

	unsigned long long _requestID;
	NSArray* _photoSettingsArray;
	/*^block*/id _completionHandler;
	BOOL _completed;

}

@property (readonly) unsigned long long requestID; 
@property (readonly) NSArray * photoSettingsArray; 
@property (readonly) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
+(id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned long long)requestID;
-(id)_initWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setRequestID:(unsigned long long)arg1 ;
-(NSArray *)photoSettingsArray;
-(BOOL)isCompleted;
@end

