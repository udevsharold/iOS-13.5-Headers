/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying> {

	NSURLRequest* _request;

}

@property (nonatomic,retain) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
+(id)keyWithRequest:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(id)initWithRequest:(id)arg1 ;
@end
