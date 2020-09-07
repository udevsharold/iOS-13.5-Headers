/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFSABaseModel.h>

@class SAFmfLocation, UIImage;

@interface FMFSALocation : FMFSABaseModel {

	SAFmfLocation* siriLocation;
	UIImage* _cachedFriendImage;

}

@property (nonatomic,retain) UIImage * cachedFriendImage;               //@synthesize cachedFriendImage=_cachedFriendImage - In the implementation block
@property (nonatomic,retain) SAFmfLocation * siriLocation; 
+(id)bundle;
+(id)locationWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
+(id)locationWithSiriLocation:(id)arg1 ;
-(id)numberFormatter;
-(id)distanceFromLocation:(id)arg1 ;
-(BOOL)hasCoordinate;
-(id)formatPhoneNumber:(id)arg1 ;
-(BOOL)isPhone;
-(id)friendName;
-(id)distanceCalculator;
-(id)unformatPhoneNumber:(id)arg1 ;
-(SAFmfLocation *)siriLocation;
-(void)decodeHandle:(id)arg1 saPerson:(id)arg2 withDictionary:(id)arg3 ;
-(void)setSiriLocation:(SAFmfLocation *)arg1 ;
-(id)initWithSiriLocation:(id)arg1 ;
-(id)initWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
-(id)personForEmailFromContacts:(id)arg1 ;
-(id)personForPhoneFromContacts:(id)arg1 ;
-(id)friendHandlePretty;
-(id)friendEmail;
-(id)friendPhone;
-(id)friendHandle;
-(id)unformattedHandle;
-(UIImage *)cachedFriendImage;
-(void)setCachedFriendImage:(UIImage *)arg1 ;
@end
