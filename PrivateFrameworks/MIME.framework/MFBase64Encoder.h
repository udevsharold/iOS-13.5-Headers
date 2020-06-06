/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFBase64Encoder : MFBaseFilterDataConsumer {

	const char* _table;
	unsigned long long _left;
	unsigned char _leftovers[3];
	unsigned long long _line;
	unsigned long long _lineBreak;
	char _padChar;

}

@property (assign,nonatomic) unsigned long long lineBreak;              //@synthesize lineBreak=_lineBreak - In the implementation block
@property (assign,nonatomic) BOOL allowSlash; 
@property (assign,nonatomic) char padChar;                              //@synthesize padChar=_padChar - In the implementation block
-(long long)appendData:(id)arg1 ;
-(void)done;
-(void)setStandardLineBreak;
-(void)setAllowSlash:(BOOL)arg1 ;
-(void)setPadChar:(char)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(void)setLineBreak:(unsigned long long)arg1 ;
-(BOOL)allowSlash;
-(unsigned long long)lineBreak;
-(char)padChar;
@end

