/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
-(id)httpMethod;
-(id)requestBody;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
@end

