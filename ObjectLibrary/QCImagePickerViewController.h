//
//  QCImagePickerViewController.h
//  ObjectLibrary
//
//  Created by Eliot Arntz on 6/15/13.
//  Copyright (c) 2013 self.edu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QCImagePickerViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (IBAction)choosePhotoButtonPressed:(UIButton *)sender;

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

@end
