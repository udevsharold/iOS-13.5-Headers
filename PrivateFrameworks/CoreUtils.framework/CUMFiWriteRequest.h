/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CUMFiWriteRequest : NSObject {

	CUMFiWriteRequest* next;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

