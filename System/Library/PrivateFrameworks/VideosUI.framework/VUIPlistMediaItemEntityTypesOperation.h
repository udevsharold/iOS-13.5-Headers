/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaItemEntityTypesFetchResponse, NSError, VUIPlistMediaDatabase;

@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation {

	VUIMediaItemEntityTypesFetchResponse* _response;
	NSError* _error;
	VUIPlistMediaDatabase* _database;

}

@property (nonatomic,retain) VUIPlistMediaDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDatabase:(VUIPlistMediaDatabase *)arg1 ;
-(VUIPlistMediaDatabase *)database;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(void)executionDidBegin;
@end

