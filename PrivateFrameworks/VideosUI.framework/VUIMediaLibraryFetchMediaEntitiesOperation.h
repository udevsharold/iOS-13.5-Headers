/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaLibraryOperation.h>

@class NSArray;

@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation {

	NSArray* _responses;
	NSArray* _requests;

}

@property (nonatomic,copy) NSArray * responses;              //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSArray * requests;               //@synthesize requests=_requests - In the implementation block
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg1 ;
@end

