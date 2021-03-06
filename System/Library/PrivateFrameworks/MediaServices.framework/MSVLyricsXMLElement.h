/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString;

@interface MSVLyricsXMLElement : NSObject {

	NSString* _elementName;
	NSString* _identifier;
	NSMutableString* _mutableText;

}

@property (nonatomic,copy) NSString * elementName;                       //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableString * mutableText;              //@synthesize mutableText=_mutableText - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)elementName;
-(void)setElementName:(NSString *)arg1 ;
-(NSMutableString *)mutableText;
-(void)setMutableText:(NSMutableString *)arg1 ;
@end

