/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VSSpeechRequest;

@interface MNDurationRequestKey : NSObject <NSCopying> {

	VSSpeechRequest* _speechRequest;

}

@property (nonatomic,readonly) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(id)initWithSpeechRequest:(id)arg1 ;
@end

