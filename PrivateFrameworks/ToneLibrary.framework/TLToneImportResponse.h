/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TLToneImportResponse : NSObject {

	long long _statusCode;
	NSString* _toneIdentifier;

}

@property (nonatomic,readonly) long long statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;              //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
-(id)description;
-(long long)statusCode;
-(NSString *)toneIdentifier;
-(id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2 ;
@end

