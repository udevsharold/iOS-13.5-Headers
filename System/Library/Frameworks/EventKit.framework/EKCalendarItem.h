/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSData, NSString, NSArray, EKCalendar, NSURL, NSDate, NSTimeZone;

@interface EKCalendarItem : EKObject

@property (nonatomic,copy) NSData * structuredData; 
@property (nonatomic,copy) NSData * localStructuredData; 
@property (nonatomic,retain) NSString * calendarItemIdentifier; 
@property (nonatomic,retain) NSArray * attachments; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarItemExternalIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL hasAlarms; 
@property (nonatomic,readonly) BOOL hasRecurrenceRules; 
@property (nonatomic,readonly) BOOL hasAttendees; 
@property (nonatomic,readonly) BOOL hasNotes; 
@property (nonatomic,readonly) NSArray * attendees; 
@property (nonatomic,copy) NSArray * alarms; 
@property (nonatomic,copy) NSArray * recurrenceRules; 
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)timeZoneFromTimeZoneName:(id)arg1 withFloatingTimeZone:(id)arg2 ;
+(id)timeZoneNameFromTimeZone:(id)arg1 ;
+(BOOL)_shouldDeleteAndAddForMoveFromCalendar:(id)arg1 toCalendar:(id)arg2 ;
+(id)knownRelationshipWeakKeys;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSArray *)attachments;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)UUID;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)priority;
-(id)uniqueID;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)action;
-(int)sequenceNumber;
-(NSString *)location;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(id)clientLocation;
-(void)setLocation:(NSString *)arg1 ;
-(BOOL)isFloating;
-(void)setAction:(id)arg1 ;
-(id)appLink;
-(void)setAppLink:(id)arg1 ;
-(BOOL)isEditable;
-(id)uniqueId;
-(void)willSave;
-(id)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setUniqueID:(id)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(id)organizer;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)originalItem;
-(void)setOriginalItem:(id)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)calendarItemIdentifier;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)preferredLocation;
-(id)startTimeZone;
-(id)endTimeZone;
-(void)setStartTimeZone:(id)arg1 ;
-(void)setEndTimeZone:(id)arg1 ;
-(id)startDateForRecurrence;
-(NSArray *)attendees;
-(BOOL)hasAttendees;
-(NSString *)calendarItemExternalIdentifier;
-(BOOL)isSelfOrganized;
-(void)removeAttendee:(id)arg1 ;
-(BOOL)isExternallyOrganizedInvitation;
-(void)setAttendees:(NSArray *)arg1 ;
-(BOOL)allowsAttendeesModifications;
-(void)addAttendee:(id)arg1 ;
-(BOOL)hasRecurrenceRules;
-(id)selfAttendee;
-(id)structuredLocation;
-(id)travelStartLocation;
-(void)setTravelStartLocation:(id)arg1 ;
-(unsigned long long)actionsState;
-(void)_removeAttachment:(id)arg1 ;
-(id)sharedItemModifiedByDisplayName;
-(id)sharedItemModifiedDate;
-(id)sharedItemCreatedByDisplayName;
-(id)sharedItemCreatedDate;
-(id)sharedItemModifiedByAddress;
-(id)sharedItemCreatedByAddress;
-(id)structuredLocationWithoutPrediction;
-(BOOL)_hadAttendees;
-(void)setStructuredLocation:(id)arg1 ;
-(id)sortedAlarms;
-(long long)indexForAlarm:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(id)localCustomObjectForKey:(id)arg1 ;
-(void)_addAttachment:(id)arg1 ;
-(NSArray *)recurrenceRules;
-(long long)selfParticipantStatus;
-(BOOL)isSelfOrganizedInvitation;
-(void)removeAlarm:(id)arg1 ;
-(id)customObjectForKey:(id)arg1 ;
-(void)setCustomObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(void)setUniqueId:(id)arg1 ;
-(id)detachedItems;
-(BOOL)requiresDetach;
-(BOOL)allowsSpansOtherThanThisEvent;
-(void)setClientLocation:(id)arg1 ;
-(BOOL)allowsRecurrenceModifications;
-(void)setRecurrenceRules:(NSArray *)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(id)exportToICS;
-(void)removeRecurrenceRule:(id)arg1 ;
-(BOOL)_validateDeletable:(id*)arg1 ;
-(NSData *)localStructuredData;
-(NSData *)structuredData;
-(id)_structuredDataDictionaryFromData:(id)arg1 ;
-(id)_dataFromStructuredDataDictionary:(id)arg1 ;
-(void)setLocalStructuredData:(NSData *)arg1 ;
-(void)setStructuredData:(NSData *)arg1 ;
-(id)_customObjectForKey:(id)arg1 local:(BOOL)arg2 ;
-(void)_setCustomObject:(id)arg1 forKey:(id)arg2 local:(BOOL)arg3 ;
-(void)setLocalCustomObject:(id)arg1 forKey:(id)arg2 ;
-(id)allAlarms;
-(id)externalURI;
-(id)exceptionDates;
-(id)externalScheduleID;
-(void)setExternalScheduleID:(id)arg1 ;
-(void)setStructuredLocationWithoutPrediction:(id)arg1 ;
-(void)_updateDefaultAlarms;
-(id)appLinkData;
-(void)setAppLinkData:(id)arg1 ;
-(id)defaultAlarms;
-(BOOL)defaultAlarmWasDeleted;
-(void)_removeDefaultAlarms;
-(void)_addDefaultAlarms;
-(id)startTimeZoneName;
-(void)setStartTimeZoneName:(id)arg1 ;
-(id)endTimeZoneName;
-(void)setEndTimeZoneName:(id)arg1 ;
-(BOOL)_isExternallyOrganizedInvitationWithAttendees:(BOOL)arg1 ;
-(BOOL)isOrganizedBySharedCalendarOwner;
-(id)externalData;
-(BOOL)_excludeAlarmDueToConnectionTrigger:(id)arg1 ;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(id)attendeesRaw;
-(id)filterAttendeesPendingDeletion:(id)arg1 ;
-(void)_setSelfAttendee:(id)arg1 ;
-(void)_removeAttendee:(id)arg1 ;
-(int)selfParticipantStatusRaw;
-(id)sharedItemCreatedByFirstName;
-(id)sharedItemCreatedByLastName;
-(id)sharedItemCreatedTimeZoneName;
-(void)setSharedItemCreatedTimeZoneName:(id)arg1 ;
-(id)sharedItemModifiedByFirstName;
-(id)sharedItemModifiedByLastName;
-(id)sharedItemModifiedTimeZoneName;
-(void)setSharedItemModifiedTimeZoneName:(id)arg1 ;
-(void)_moveToCalendar:(id)arg1 forCommittingItem:(id)arg2 ;
-(void)_recursivelyPerformBlockOnSelfAndDetachedItems:(/*^block*/id)arg1 forCommittingItem:(id)arg2 ;
-(id)_generateNewUniqueID;
-(void)_adjustAfterRebaseForMovingFromOldSource:(id)arg1 toNewSource:(id)arg2 committingItem:(id)arg3 ;
-(void)_clearFieldsAfterMovingToNewCalendarOnSameSource;
-(void)_setCalendarRecursively:(id)arg1 forCommittingItem:(id)arg2 ;
-(void)setExternalData:(id)arg1 ;
-(void)_deletePersistentItemAndDetachedItems:(id)arg1 forCommittingItem:(id)arg2 ;
-(id)ekExceptionDates;
-(void)setEkExceptionDates:(id)arg1 ;
-(void)setDetachedItems:(id)arg1 ;
-(BOOL)isOnlyAlarmAcknowledgedPropertyDirty;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(void)_updateHasRecurrenceRulesIfNeeded;
-(void)_updateHasAttendeesIfNeeded;
-(void)_updateHasNotesIfNeeded;
-(void)setCalendarItemIdentifier:(NSString *)arg1 ;
-(BOOL)hasNotes;
-(id)calendarScale;
-(void)setCalendarScale:(id)arg1 ;
-(void)setDefaultAlarmWasDeleted:(BOOL)arg1 ;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsAlarmModifications;
-(BOOL)hasAlarms;
-(void)setAllAlarms:(id)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAllSnoozedAlarms;
-(BOOL)_hadRecurrenceRules;
-(void)setSelfAttendee:(id)arg1 ;
-(id)attendeeForMe;
-(id)participantMatchingContact:(id)arg1 ;
-(id)attendeeMatchingEmailAddress:(id)arg1 ;
-(void)setOrganizer:(id)arg1 ;
-(void)setSharedItemCreatedByDisplayName:(id)arg1 ;
-(void)setSharedItemCreatedByAddress:(id)arg1 ;
-(void)setSharedItemCreatedByFirstName:(id)arg1 ;
-(void)setSharedItemCreatedByLastName:(id)arg1 ;
-(void)setSharedItemCreatedDate:(id)arg1 ;
-(id)sharedItemCreatedTimeZone;
-(void)setSharedItemCreatedTimeZone:(id)arg1 ;
-(void)setSharedItemModifiedByDisplayName:(id)arg1 ;
-(void)setSharedItemModifiedByAddress:(id)arg1 ;
-(void)setSharedItemModifiedByFirstName:(id)arg1 ;
-(void)setSharedItemModifiedByLastName:(id)arg1 ;
-(void)setSharedItemModifiedDate:(id)arg1 ;
-(id)sharedItemModifiedTimeZone;
-(void)setSharedItemModifiedTimeZone:(id)arg1 ;
-(BOOL)canMoveToCalendar:(id)arg1 error:(id*)arg2 ;
-(void)moveToCalendar:(id)arg1 ;
-(void)_addDetachedItem:(id)arg1 ;
-(void)_removeDetachedItem:(id)arg1 ;
-(void)_deleteSelfAndDetached;
-(void)setExceptionDates:(id)arg1 ;
-(void)_addExceptionDate:(id)arg1 ;
-(void)_removeExceptionDate:(id)arg1 ;
-(void)updateWithAppLink:(id)arg1 usedSelectedText:(BOOL*)arg2 ;
-(void)_updateModifiedAlarmByAcknowledging;
-(void)_willCommit;
@end
