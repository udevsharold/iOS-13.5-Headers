/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCKeyValueSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSArray* _sectionKeyValues;

}

@property (nonatomic,retain) NSString * sectionTitle;                 //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSArray * sectionKeyValues;              //@synthesize sectionKeyValues=_sectionKeyValues - In the implementation block
+(id)sectionWithLocalizedArray:(id)arg1 title:(id)arg2 footer:(id)arg3 ;
+(id)sectionWithKeyValues:(id)arg1 ;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 keyValues:(id)arg3 ;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionFooter;
-(void)setSectionFooter:(NSString *)arg1 ;
-(NSArray *)sectionKeyValues;
-(void)setSectionKeyValues:(NSArray *)arg1 ;
@end

