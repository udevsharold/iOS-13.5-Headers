/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSArtworkRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)isConcurrent;
-(BOOL)acceptsGzipEncoding;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
@end

