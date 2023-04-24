import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class DateTime {
    public static void main(String[] args) {
        LocalDateTime dateTime=LocalDateTime.now();

        DateTimeFormatter Dateformatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        DateTimeFormatter TimeFormatter=DateTimeFormatter.ofPattern("hh:mm:ss");

        String formattedDate =dateTime.format(Dateformatter);
        String formattedTime =dateTime.format(TimeFormatter);

        System.out.println("Date : "+formattedDate+"\nTime : "+formattedTime);
    }
}
