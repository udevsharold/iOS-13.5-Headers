/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreFoundation/ASFAsn1Token.h>

@class ASFAsn1Token;

@interface ASFAsn1OSToken : ASFAsn1Token {

	ASFAsn1Token* mValue;

}

@property (readonly) ASFAsn1Token * value; 
-(id)stringValue;
-(ASFAsn1Token *)value;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
@end

