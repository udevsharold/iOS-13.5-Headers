/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {

	unsigned char _lastEncoded;
	unsigned long long _required;
	BOOL _forTextPart;
	BOOL _badlyEncoded;

}

@property (assign,nonatomic) BOOL forTextPart;              //@synthesize forTextPart=_forTextPart - In the implementation block
-(long long)appendData:(id)arg1 ;
-(void)done;
-(void)setForTextPart:(BOOL)arg1 ;
-(BOOL)forTextPart;
@end

