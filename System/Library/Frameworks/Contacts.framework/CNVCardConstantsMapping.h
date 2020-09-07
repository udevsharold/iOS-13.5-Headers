/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject {

	NSDictionary* _mapping;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
+(id)vCardToCNSocialProfileConstantsMapping;
+(id)vCardToCNInstantMessageConstantsMapping;
+(id)CNToVCardSocialProfileConstantsMapping;
+(id)CNToVCardInstantMessageConstantsMapping;
-(NSDictionary *)mapping;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(id)invertedMapping;
-(void)setMapping:(NSDictionary *)arg1 ;
@end
