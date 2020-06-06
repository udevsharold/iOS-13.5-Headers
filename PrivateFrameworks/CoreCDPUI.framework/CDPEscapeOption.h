/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDPEscapeOption : NSObject {

	NSString* _title;
	unsigned long long _style;
	/*^block*/id _escapeAction;
	NSString* _progressTitle;
	NSString* _progressLabel;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id escapeAction;                         //@synthesize escapeAction=_escapeAction - In the implementation block
@property (nonatomic,copy) NSString * progressTitle;                //@synthesize progressTitle=_progressTitle - In the implementation block
@property (nonatomic,copy) NSString * progressLabel;                //@synthesize progressLabel=_progressLabel - In the implementation block
+(id)cancelOption;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setProgressLabel:(NSString *)arg1 ;
-(NSString *)progressLabel;
-(void)setEscapeAction:(id)arg1 ;
-(void)setProgressTitle:(NSString *)arg1 ;
-(id)escapeAction;
-(NSString *)progressTitle;
@end

