/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKSearchFoundationRichText.h>

@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText {

	BOOL _reviewResolved;

}

@property (getter=isReviewResolved) BOOL reviewResolved;              //@synthesize reviewResolved=_reviewResolved - In the implementation block
-(BOOL)isRichTextResolved;
-(void)setReviewResolved:(BOOL)arg1 ;
-(BOOL)isReviewResolved;
-(void)resolveReviewStringWithProviderNameByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3 ;
-(void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3 ;
@end

