/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSUURLWrapper.h>

@class NSURL, TSUURLTrackerFilePresenter, NSData, NSString;

@interface TSUURLTracker : NSObject <TSUURLWrapper> {

	TSUURLTrackerFilePresenter* _filePresenter;

}

@property (readonly) NSURL * URL; 
@property (readonly) NSData * bookmarkData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)stop;
-(NSURL *)URL;
-(NSData *)bookmarkData;
-(id)initWithBookmarkData:(id)arg1 ;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBookmarkData:(id)arg1 delegate:(id)arg2 ;
@end

